# Title: A Lightweight Continuous Behavioral Authentication System Using Keystroke Dynamics and Interaction Pattern. 









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


