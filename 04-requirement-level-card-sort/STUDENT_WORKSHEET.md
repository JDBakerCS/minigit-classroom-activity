# Activity 4 Student Worksheet

## Observation versus problem

An **observation** is a factual event: “Two files were edited, but only one was selected.”

A **problem** explains possible harm: “The saved version may omit required work.”

Test your statement:

- Can someone directly see, hear, count, or verify it? It is probably an observation.
- Does it explain harm, difficulty, delay, error, or risk? It is probably a problem.

Use this sentence test:

> **We saw that** `[observation]`. **This matters because** `[problem or consequence]`.

### Worked example

Scenario: A student changed `main.cpp` and `README.md`, but the saved version contains only the change to `main.cpp`.

- **Observation:** The student changed two files, but the saved version contains the change from only one file.
- **Problem:** The saved version is incomplete because it is missing the required documentation change.

Why they are different:

- The observation can be checked by inspecting the files and saved version.
- The problem explains the undesirable meaning or consequence of that evidence.
- “The student changed two files” does not by itself explain why anyone should care.
- “The version may be incomplete” does not provide the concrete evidence that led to that conclusion.

### Additional example

> We saw that three saved versions are all described as “update.” This matters because the team cannot determine the purpose of each version.

The description count is the observation. Difficulty understanding the history is the problem.

## Classify the statements

Use O, P, UN, or UR.

| # | Statement | Type | Explanation |
|---:|---|---|---|
| 1 | A student edited two files but selected only one. | O | this can be visually verified in the UI |
| 2 | The next project version may omit required work. | P | explains the potential risk and negative impact of leaving out a file  |
| 3 | A developer needs a way to understand current work because overlooked changes can produce an incomplete version. | UN  | explains a part of what a user needs, desired capability and technical justification  |
| 4 | A developer shall be able to identify changed files. | UR | "shall" is used to define a verifiable functional requirement  |
| 5 | Temporary debugging output appeared in the saved program. | O  | refers to evidence in the saved program or output |
| 6 | Unintended content may reduce software quality. | P  | Describes the harm and reduction in quality caused by the debug output |
| 7 | Three versions were all described as “update.” | O | Countable, verifiable factual record of commit message text |
| 8 | The team cannot determine the purpose of an earlier version. | P | refers to a bottleneck during production from the vague description  |

## Create a derivation

Observation: _Three saved verisons were all described as "update___________________________________________________________

Problem: __Team cannot determine the purpose or changes in an earlier version.______________________________________________________________

UN: A developer needs a way to attach descriptive messages to project checkpoints because vague labels make revision history unreadable.

UR: __a version control system shall require the user to provide a text description before saving a new revision snapshot____________________________________________________________________

## Explain your distinction

Complete both sentences for your derivation:

> We saw that _three saved versions were all described as "update"__________________________________________________________.

> This matters because __becasue the team cannot determine the purpose or changes in an earlier version________________________________________________.

How could another person verify your observation?

_run git log in the terminal and read the exact texted stored for each commit message_______________________________________________________________________

What harm, difficulty, or risk makes your problem important?

___Teammates end up wasting time digging through old code lines to figure out what changed, or worse, restoring the wrong broken version during a rollback._____________________________________________________________________
