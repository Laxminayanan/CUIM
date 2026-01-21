# Title: A Lightweight Continuous Behavioral Authentication System Using Keystroke Dynamics and Interaction Pattern. 









# ⭐ **Story Explanation of our Problem Statement**

**“A Lightweight Continuous Behavioral Authentication System Using Keystroke Dynamics and Interaction Patterns…”**



## 🔥 **Start with a relatable real-world story (Hook)**

*“Sir, imagine this. A student logs into his university portal using his correct username and password. He leaves his laptop for just two minutes. Another person quickly sits in his place and starts downloading confidential exam papers. The system still thinks it is the same student — because authentication happened only **once at login**, not continuously. The system has no idea that the user has changed.”*



## 🔐 **Highlight the core problem**

*“This is a major security gap in most digital systems today. Passwords or OTPs verify a user only at the start. Once someone logs in, the system assumes the same person is sitting forever. If an attacker hijacks the session, the system cannot detect it.”*

## 🧠 **Introduce the insight (Your solution idea)**

*“But humans have unique behavioral patterns — the way we type, the speed we press keys, the gap between characters, our mouse movement style, our interaction rhythm. These patterns act like a digital fingerprint.”*


## 🚀 **Introduce your project as the hero**

*“So our project continuously monitors these behavioral features in the background. If the behavior suddenly changes — meaning a different person has taken over — the system instantly detects it and locks the session.”*



## 🧩 **Why lightweight? Why C?**

*“Unlike advanced ML-based systems that require heavy models, our goal is to build a **lightweight, real-time system in C** that works even on low-resource devices. No external ML models, no large datasets — completely algorithm-based detection.”*



## 🛡️ **How the system protects**

*“Instead of verifying only at login, our system constantly verifies the user every few seconds by analyzing their:*

* *Keystroke timing patterns*
* *Hold time & flight time between keys*
* *Mouse movement speed*
* *Interaction rhythm*

*If these patterns drift too much from the baseline, we flag it as a possible attacker.”*



## 🌐 **Where this is useful**

*“This solution is needed in banking websites, exam portals, office logins, and shared public computers where user-switching risk is high.”*


## 🎯 **Conclusion — Clear one-line summary**

*“In short, we are building a lightweight, continuous, behavior-based authentication system that detects imposters **after login**, even if they know the correct password.”*


----




# Key Terms Involved In This Project: 

#### Flight Time: 
In **keystroke dynamics**, **flight time** is one of the most important behavioral features.

# ✅ **What is Flight Time in Keystroke Dynamics?**

### **Flight Time = Time between releasing one key and pressing the next key.**

In short:
👉 It measures **how fast your finger travels from one key to the next**.

It is also called:

* **Inter-key latency**
* **Transition time**
* **Gap time**



# 🔍 **Example**

Suppose you type the characters:

**A → B**

Typical steps:

1. You **release** the key ‘A’
2. After some milliseconds, you **press** the key ‘B’

The time between step 1 and step 2 = **Flight Time**



# 🧠 **Why is flight time unique?**

Because every person has a different typing style:

* Some move fingers very fast → short flight time
* Some move slower → longer flight time
* Some hesitate between certain letter pairs
* Some naturally pause while typing vowels, numbers, or special symbols

These small micro-patterns are **almost impossible to imitate**, even by an attacker.


# 🏃‍♂️✈️ **Real-world analogy**

Think of it like **walking between two steps on stairs**:

* **Hold Time** = how long your foot stays on each step
* **Flight Time** = the time you take to move from one step to the next

Different people climb differently:

* Some fast
* Some slow
* Some hesitate
* Some skip steps

These patterns become their “behavior signature.”
Typing has the same behavioral uniqueness.


# 🔐 **Why is it important for your project?**

Your continuous authentication model will continuously track:

1. **Hold Time** (key press duration)
2. **Flight Time** (time between consecutive keys)
3. **Typing rhythm and patterns**

So if another person takes over the system:

* Their flight time pattern will be different
* The system will detect a mismatch
* It will flag the session as suspicious

# 🎯 **One-line answer for judges:**

**“Flight time is the time gap between releasing one key and pressing the next key. It uniquely identifies a user’s typing rhythm and helps detect imposters.”**


###### Things To Be Explored: 

✔ How to calculate flight time in C
✔ Sample code for measuring timing
✔ How to create a baseline profile
✔ How attackers can’t replicate these timings
✔ How to integrate flight time in your detection algorithm










# Below is **the most complete list of questions judges may ask** for project: 
**“A Lightweight Continuous Behavioral Authentication System Using Keystroke Dynamics and Interaction Patterns for Secure Real-Time User Verification in C.”**

This includes **technical, conceptual, mathematical, design-based, security-based, implementation-based, justification-based, and tricky questions**.

# ✅ **1. High-Level Concept Questions**

1. What is continuous authentication and how is it different from traditional authentication?
2. Why did you choose behavioral patterns instead of passwords?
3. What makes keystroke dynamics reliable as a biometric?
4. Why is continuous authentication important in modern systems?
5. What real-world problems does your system solve?
6. What makes your approach lightweight compared to existing solutions.


# ✅ **2. Problem Understanding Questions**

1. What are the limitations of passwords and OTP-based authentication?
2. Why do we need continuous authentication even after login?
3. What types of attacks does your solution prevent?
4. How does your system help prevent session hijacking?
5. What are the risks if continuous authentication is not used?


# ✅ **3. Technical Implementation Questions (C Language)**

1. Why was C chosen instead of Python or Java?

2. How did you implement keystroke capture in C?

3. How do you measure timing features (e.g., key press duration)?

4. What data structures did you use for storing patterns?

5. How do you handle noise in captured data?

6. How is the baseline (user profile) stored and updated?

7. How do you compute similarity in C?

   * Euclidean distance?
   * Manhattan distance?
   * Thresholding?

8. How does your system run in real-time without delays?

9. How do you ensure memory safety and prevent buffer overflows?

10. Did you use multi-threading or event-based callbacks?


# ✅ **4. Algorithm & Behaviour Modeling Questions**

1. What behavioral features do you track? (Dwell time, flight time…)
2. How do you define “normal behavior”?
3. How many samples are required to build the baseline?
4. How do you detect deviation from the baseline?
5. Which statistical similarity measure did you use and why?
6. How do you handle gradual behavioral changes over time?
7. What thresholds did you set and how were they calculated?
8. How does your system differentiate between anomalies and attacks?



# ✅ **5. Accuracy, Testing & Evaluation Questions**

1. How did you validate the accuracy of your authentication system?
2. How many users did you test with?
3. What are your False Acceptance Rate (FAR) and False Rejection Rate (FRR)?
4. How do you reduce false positives?
5. How did you simulate attacker behavior?
6. Did you test the system on different keyboards or devices?
7. What happens when a user types fast vs. slowly?



# ✅ **6. Security & Privacy Questions**

1. Can an attacker mimic someone’s typing rhythm?
2. How do you protect user behavior data?
3. Do you store raw keystrokes or only derived metrics?
4. What happens if the system incorrectly rejects the user?
5. Does your system violate user privacy?
6. How do you prevent replay attacks?
7. How does your system behave under keyloggers or malware?



# ✅ **7. Edge Case Questions**

1. What if the user is tired or typing with one hand?
2. What about disabled users or people with inconsistent typing?
3. How does the system react if the user uses a different keyboard?
4. How does your system handle burst typing, backspaces, or corrections?
5. What if the user suddenly changes behavior (stress, injury, cold hands)?


# ✅ **8. System Design & Architecture Questions**

1. What is your system pipeline from event capture → processing → authentication?
2. Is your system event-driven, polling-based, or interrupt-based?
3. Does your solution support multi-user environments?
4. Can this system work on low-power or embedded devices?
5. How scalable is your architecture?


# ✅ **9. Deployment & Real-World Use Case Questions**

1. Can this system work on mobile phones?
2. Can it run in offline mode?
3. What industries can immediately adopt this solution?
4. What is the expected computational overhead?
5. Can your system be integrated with existing authentication systems?


# ✅ **10. Ethical & Societal Questions**

1. Does continuous monitoring violate user consent?
2. How do you ensure fairness across different user groups?
3. Is behavioral data considered sensitive biometric information?
4. What are the legal challenges of behavioral biometrics?



# ✅ **11. Time & Resource Justification Questions**

1. How long did each module take to implement?
2. Why is your solution achievable within limited time?
3. What trade-offs did you make to keep the system lightweight?


# ✅ **12. Tricky & Stress Questions Judges May Ask**

These are used to test confidence, clarity, and depth.

1. If someone copies the exact timing pattern and uses a macro, will your system fail?
2. What if the keyboard hardware introduces timing delays?
3. How would you scale this solution to millions of users?
4. What happens if the OS scheduler delays your timestamp readings?
5. How do you prevent drift in the user’s baseline over months?
6. Why should we choose your project over advanced AI models?
7. If this is “lightweight,” how do you justify security strength?
8. Isn’t this just a keylogger with math? Explain the difference.
9. What is the single biggest weakness of your system?
10. If you had more time, what improvement would you add?

