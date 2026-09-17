# Activity 2 Student Worksheet

Do not merely define a command. Explain what the user observes, wants, and risks.

| Command | What does the user observe? | What is the user trying to accomplish? | What problem or risk is addressed? |
|---|---|---|---|
| `status` | shows any file that has been modified in red and shows any from that has been staged.  | to check the status any given time before or after changes | Preventing committing unintended files or forgetting to stage modified work. |
| `diff` | line by line code differences between working directory, staging area or past commits.  | review exact code modifications before staging or saving them  | prevents including syntax errors, bugs or accidenctal deletions. |
| `add <file>` | file changes move to the staging area; status turns green  | Selectively package specific file changes for the next commit snapshot  | Prevents commits of imcomplete, unwanted/unverified files  |
| `commit -m "message"` | a snapshot with a hash and recorded message  | saves a milestone for staged work into the repo history  | Eliminates data loss and reliance on risky manual back ups  |
| `log` | A chronological list of past commits showing commit IDs, authors dates and messages  | Inspects history to trace project changes or locate previous working states  | prevents losing track of project evolution   |

Example for a non-Git command: A “print” command produces a paper copy; the user wants information usable away from the computer; the risk is lacking access during a meeting.

**UN-01:** A __developer________________ needs a way to inspect files status and review line by line code changes___________________________

because  manual tracking leads to untracked modifications, accidental overwrites and silent bugs________________________________________________________________.

Evidence command(s): __status , diff__________________

**UN-02:** A dev__________________ needs a way to __stage, snapshot and inspect historical project milestones__________________________

because __without a commit history there is no safety net or audit trail to recover broken code______________________________________________________________.

Evidence command(s): _add <file>, log, commit -m "message"___________________

