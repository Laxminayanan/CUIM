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


Below is **the complete, step-by-step, fully structured way** to **present, demonstrate, simulate, and defend** your idea:

# **Project: Continuous Behavioral Authentication Using Keystroke & Interaction Patterns**

---

# ✅ **HOW TO PRESENT THIS PROJECT TO EVALUATORS (CUIM / SAP / Code Unnati)**

This guide explains **exactly what to show, how to show, what to speak, how to simulate, and how to prove your solution works**—as if you are presenting LIVE to judges.

I am giving you:

### **1. Full Presentation Structure**

### **2. Demo Simulation (Even if your project is not fully built)**

### **3. Explanation of Each Module**

### **4. “What to show on screen” for each stage**

### **5. Defense answers (if they ask tricky questions)**

### **6. Implementation plan judges expect**

---
# `Final Workflow:` 
# 🎤 **1. INTRODUCTION — HOW YOU SHOULD START (30–40 seconds)**

**“Good morning respected judges, we are presenting a security innovation titled
‘A Lightweight Continuous Behavioral Authentication System’

instead of verifying the user only at login, our system keeps checking ‘Is this really the same user?’ every second using behavioral patterns like keystroke speed, key hold duration, typing rhythm, and mouse movements.

It works in real-time, offline, without any heavy AI models, making it perfect for enterprises, banking kiosks, and secure public systems.”**

**Pause & smile.**



────────────────────────────────────────────────────────────────────

# 🎯 **2. PROBLEM STATEMENT (EXPLAIN AS A STORY)**

Use this:



### **🔒 Problem: Passwords Can Be Stolen — Behavior Cannot**

“Imagine someone logs into your system, walks away for 2 minutes,
and another person sits and starts using it.

The system still trusts the *session* because the login was valid earlier.

This is how **90% of session hijacks happen**.”


### **🔍 The Real Pain**

Even after login, systems **do NOT know who is typing now**.
Companies lose crores annually due to:

✔ internal misuse
✔ account takeover
✔ unattended computer access
✔ stolen sessions in banking/public kiosks

But…

**Behavioral patterns are unique — like digital fingerprints.**
Your typing rhythm is yours only.



────────────────────────────────────────────────────────────────────

# 🚀 **3. YOUR SOLUTION (Explain in SIMPLE language)**

**“We continuously authenticate the user *after login*
by monitoring small interaction patterns like:

* keystroke timings
* key hold duration
* finger pressure approximation
* mouse movement pattern
* typing rhythm pattern”**

If the system detects deviation:

✔ system auto-locks
✔ session pauses
✔ suspicious behavior is logged
✔ admin gets alerted

Think of this like:

### **📌 "Face unlock, but for your typing behavior."**



────────────────────────────────────────────────────────────────────

# 🧩 **4. MODULE-BY-MODULE SYSTEM WORKING (To explain to judges)**

Below is EXACTLY how you must explain:



# **Module 1 — Data Capture Layer (C Program)**

Captures real-time data:

* time between two key presses
* hold duration (press to release)
* average typing speed
* typing rhythm sequences
* mouse acceleration & direction

🎤 **What to say:**
“Using low-level event listeners in C, we continuously capture user interaction data with negligible impact on system performance.”



# **Module 2 — Pattern Extraction (Feature Engineering)**

From raw keystrokes, you convert into:

* Flight time (time between consecutive keys)
* Dwell time (time a key is held)
* Error rate & backspaces
* Mouse curve smoothness
* Pause frequency

🎤 **What to say:**
“These features act like behavioral fingerprints.”


# **Module 3 — User Baseline Profile**

During enrollment, the system stores:

* min, max, avg typing timings
* standard deviation
* acceptable behavior range
* auto-learn improvements

🎤 **“We build a behavior signature for each user without storing any text or sensitive data.”**



# **Module 4 — Real-Time Comparison Engine**

Every new keystroke is compared with the baseline.

If difference > threshold → RISK SCORE increases
If risk score > limit → FLAG user as suspicious

🎤 **“This works like a real-time referee watching for mismatch.”**



# **Module 5 — Response Layer (Actions)**

If behavior mismatch crosses a threshold:

* lock screen
* pause session
* send alert
* log event
* ask re-verification

🎤 **“If someone else suddenly uses the system, it will detect and react immediately.”**


────────────────────────────────────────────────────────────────────

# 🖥️ **5. DEMO SIMULATION (EVEN IF PROJECT IS NOT 100% READY)**

Exact instructions:

### **Step 1: Show baseline enrollment**

Tell judges:

**“First I type normally, and the system learns my rhythm.”**


### **Step 2: Show normal usage**

Type again, system shows:

* Match 95%
* Risk: Low
* Status: User confirmed



### **Step 3: Ask your friend to type**

System shows:

* Match dropped to 45%
* Anomalies in timing
* Behavior deviation detected
* LOCKED in 3 seconds


### **Step 4: Show logs**

Display:

* timestamp
* anomaly score
* reason
* which features mismatched

Judges LOVE logs!


────────────────────────────────────────────────────────────────────

# 🧠 **6. WHAT ATTACKS YOU CAN SHOW (for extra points)**

### 🟥 1. Imitation Attack

Friend tries to type like you → fails
(reason: impossible to mimic microsecond timing)

### 🟥 2. Slow typing attack

Attacker types slow → system detects abnormal rhythm

### 🟥 3. Script/Automation attack

Write a script to simulate typing → your system detects “perfect timing pattern,” which is unnatural.

### 🟥 4. Shoulder surfing

Even if attacker sees your password,
they cannot replicate your typing behavior.

**This is extremely powerful in front of judges.**



────────────────────────────────────────────────────────────────────

# ⭐ **7. HOW TO EXPLAIN THE ENTIRE IDEA LIKE A STORY**

Use THIS SCRIPT (memorize):



**“Imagine you enter a secure room using your key card.
You enter once — but after that, nobody checks if you walked out and someone else walked in.

This is exactly how computers work today.
Once you log in, they trust you forever.

We solve this.
We built a system that continuously watches your behavior patterns.
If someone else takes over your session or tries to imitate you,
our system detects it instantly and locks the system.

Instead of using heavy AI,
we designed a lightweight C-based engine that learns your behavior through timing patterns—
something unique and almost impossible to copy.

This makes the system ideal for
banking kiosks, offices, airports, and shared computers.
It adds a second invisible layer of security,
working silently in the background.”**

This story will impress the judges the MOST.



────────────────────────────────────────────────────────────────────

# 📦 **8. What to Show in the Working Prototype UI**

Even if basic, UI should show:

✔ Graph of timing patterns
✔ Real-time risk score changing
✔ Anomaly detection alert
✔ Session lock
✔ Behavioral deviation logs
✔ Enrollment screen
✔ Dashboard with user stats

You do NOT need a fancy UI — even CLI + simple graphs are enough.


────────────────────────────────────────────────────────────────────

# 🧩 **9. HOW TO JUSTIFY USING C (Very Important)**

Judges will ask:
**“Why C? Why not Python or AI tools?”**

You must say:

* C gives extremely low latency (microsecond accuracy needed).
* Direct access to keyboard/mouse events.
* Lightweight — runs even on kiosks & low-power devices.
* No external ML model needed → full privacy.
* Zero dependencies → highly deployable.

This will get you maximum points in “Technical reasoning”.


────────────────────────────────────────────────────────────────────

# 🏆 **10. WHAT JUDGES LOOK FOR (Checklist)**

To win, you must show:

✔ Clear story
✔ Real problem
✔ Functioning prototype
✔ Technical depth
✔ Security use-case
✔ Performance advantage
✔ How this helps SAP / Enterprises
✔ How it is scalable
✔ Low computational cost
✔ Future improvements

















---

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

