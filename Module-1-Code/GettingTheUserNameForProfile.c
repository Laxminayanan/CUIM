#include<stdio.h>
#include<stdlib.h>

typedef struct Character{
	char character;
	struct Character *link;
} Character;

typedef struct String{
	Character *start;
	size_t length;
} String;

typedef enum APPEND_STATUS{
	APPEND_FAIL,
	APPEND_SUCCESS,
} APPEND_STATUS;

typedef enum FREE_STATUS{
	INVALID_POINTER_FOR_FREE,
	ALREADY_NULL,
	FREE_SUCCESS,
} FREE_STATUS;

// Function Prototypes/Forward Declarations.
String *initializePlaceToStoreOneLineOfContent(void);
String *readOneLineOfContent(const char *const);
char getChar(void);
APPEND_STATUS append(String *const,const char);
Character *lastAppendedCharacterAddress(Character *const);
void printOneLineOfContent(const String *const);
FREE_STATUS freeOneLineOfContent(String **const);

int main(void){
	String *nameOfTheUser = readOneLineOfContent("Enter Your Name For Profile Creation: ");
	if(nameOfTheUser != NULL){
	    printf("Entered Name: "); 
		printOneLineOfContent(nameOfTheUser);
		freeOneLineOfContent(&nameOfTheUser);
	}else{
	    printf("Currently Unable To Store The Content That You Entered On Console!\n"); 
	}
	return 0;
}

// Actual Function Defintions. 
String *initializePlaceToStoreOneLineOfContent(void){
    String *ptr = malloc(sizeof(String)); 
    if(ptr != NULL){
        ptr -> start = NULL; 
        ptr -> length = 0; 
        return ptr; 
    }
    return NULL;
}

String *readOneLineOfContent(const char *const prompt){
	String *string = initializePlaceToStoreOneLineOfContent();
	if(string != NULL){
		printf("%s", prompt);
		char character;
		character = getChar();
		APPEND_STATUS statusOfAppend;
		while(character != '\n'){
			statusOfAppend = append(string, character);
			if(statusOfAppend != APPEND_SUCCESS){
				freeOneLineOfContent(&string);
				return NULL;
			}
			character = getChar();
		}
		return string;
	}
	return NULL;
}

char getChar(void){
	char character;
	scanf("%c", &character);
	return character;
}

APPEND_STATUS append(String *const string,const char character){
	Character *characterPointer = malloc(sizeof(Character));
	if(characterPointer == NULL){
		return APPEND_FAIL;
	}
	characterPointer -> character = character;
	characterPointer -> link = NULL;
	if(string -> start == NULL){
		((string) -> start) = characterPointer;
	}else{
		Character *lastAppendedCharAddress = lastAppendedCharacterAddress((string) -> start);
		lastAppendedCharAddress -> link = characterPointer;
	}
	((string) -> length) = (((string) -> length) + 1);  
	return APPEND_SUCCESS;
}

Character *lastAppendedCharacterAddress(Character *const start){
	if(start == NULL){
		return NULL;
	}else{
	    Character *temp = start; 
		while(temp -> link != NULL){
			temp = temp -> link;
		}
		return temp;
	}
}

void printOneLineOfContent(const String *const string){
    if(string != NULL){
    	if(string -> start != NULL){
    		Character *temp = string -> start;
    		while(temp != NULL){
    			printf("%c", temp -> character);
    			temp = temp -> link;
    		}
    		printf("\n");
    	}
    }
}

FREE_STATUS freeOneLineOfContent(String **string){
	if(string == NULL){
		return INVALID_POINTER_FOR_FREE;
	}
	if((*string) == NULL){
		return ALREADY_NULL;
	}
	Character *temp, *tempString = ((*string) -> start);
	while(tempString != NULL){
		temp = tempString -> link;
		free(tempString);
		tempString = temp;
	}
	((*string) -> start) = NULL;
	free(*string); 
	(*string) = NULL; 
	return FREE_SUCCESS;
}
