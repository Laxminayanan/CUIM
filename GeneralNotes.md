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


