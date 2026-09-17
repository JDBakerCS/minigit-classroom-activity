# Activity 3 Student Worksheet

## Command prompts

Conduct interviews for at least two prompts:

- “I want `status`.”
- “I want `diff`.”
- “I want to `add` a file.”
- “I want to `commit` my changes.”
- “I want to view the `log`.”

## Interview 1

Command: __I want status__________________

| Question | User answer |
|---|---|
| Why do you want it? | To check which files have been modified, which files have been staged and which files have been left untracked  |
| What problem does it solve? | lets me know for sure what state my working directory and staging area are currently in. |
| What may happen without it? | I might accidentally commit files I didnt wan to commit, leave modified code untrack, or overwrite work blindly  |
| What outcome do you ultimately need? | Clear visibility into the repo's state to make moves I intended to make.  |

**UN:** A __softward dev________________ needs a way to ____to inspect working directory and staging area states__________________________

because __working without it leads to untracked modificatios, accidental commits or missing files______________________________________________________________.

**UR:** A __a version control system________________ shall be able to ___display the current state of untracked, modified and staged files upoon user request._________________________.

## Interview 2

Command: _commit___________________

| Question | User answer |
|---|---|
| Why do you want it? | To save a permenant, recorded snapshot of my staged changes into the project history  |
| What problem does it solve? | it eliminates relience on risky manual file backups(file_v1 file_v2) and provides a clean audio trail  |
| What may happen without it? |Progress can easily be lost or overwritten with no safety net or version history toroll back to when code breaks  |
| What outcome do you ultimately need? | a documented timeline of stage checkpoints that can be referenced or restored at any time.  |

**UN:** A _software dev_________________ needs a way to ___save staged changes into permanent, documented revision snapshots___________________________

because __without a structure revision history ther is no safey net or recovery path for broken code. ______________________________________________________________.

**UR:** A _version control system_________________ shall be able to __create a permentant immutable snapshot of staged changes accompanied by a user-provided commit message.__________________________.
