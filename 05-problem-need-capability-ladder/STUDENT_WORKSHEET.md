# Activity 5 Student Worksheet

## Scenarios

### Scenario A — Forgotten file

Maya edits `main.cpp` and `README.md`. Before saving the next project version, she remembers `main.cpp` but overlooks `README.md`. The submitted version contains the code change but not the required instructions.

### Scenario B — Debugging output

Leo adds temporary diagnostic messages while debugging. The defect is fixed, but he cannot easily identify every diagnostic line and saves some of them in the next version.

### Scenario C — Mixed tasks

Nora fixes a calculation defect and begins an unrelated menu redesign. The defect fix is ready, but the redesign is incomplete. Both sets of changes are present in her working project.

### Scenario D — Unclear history

A team’s saved versions are described as “update,” “more work,” and “final.” Two weeks later, the team cannot determine which version introduced input validation.

**Assigned or selected scenario:** A / B / C / D

## Meaning of each step

1. **Evidence:** Copy only facts supplied by the scenario. Do not interpret them yet.
2. **Problem and consequence:** Explain what is difficult or risky and what may result.
3. **Desired outcome:** State what should improve for the user, without naming a command.
4. **UN:** Combine the role, outcome, and reason.
5. **UR:** State one thing the user must be able to do, see, receive, or confirm.

## Your ladder

**1. Evidence:** _Maya edits two files. one doc and one with code but only includes the code file. so the newest version does not have the instructions or documentation of the changes to main_______________________________________________________

**2. Problem:** _the new verison lacks the instructions that go with the changes in main________________________________________________________

**Consequence:** _The team involved will have to deduce the changes to main along with anything in the project affected by it_______________________________________________________

**3. Desired outcome:** _she commits both file edits she intended to package together________________________________________________

**4. UN:** A ___dev _______________ needs a way to __double check every file they wanted to include in the next version are staged commited and pushed for the PR review_________________________

because ___without a way to make sure, you are only assuming_____________________________________________________________.

**5. UR-01:** A _dev_________________ shall be able to __view a list of all staged and unstaged file modifications____________________.

**UR-02:** A ____dev______________ shall be able to _review specific diffs in modified files prior to saving a version________________________.

**UR-03 (if needed):** A __dev________________ shall be able to __verify which files are staged for the next commit__________.

**6. Supporting command(s):** ___git status git diff git add git diff --staged_______________________________________

## Worked example—not one of the assigned scenarios

Scenario: A student saves a project version and later cannot remember why it was created.

- Evidence: The student cannot remember the version’s purpose.
- Problem: The version lacks useful context; later maintenance becomes harder.
- Desired outcome: Recognize the purpose of saved versions.
- UN: A developer needs a way to understand the purpose of saved versions because missing context makes maintenance difficult.
- UR: A developer shall be able to attach a meaningful description when saving a version.
- Commands: `commit -m`, later viewed through `log`.
