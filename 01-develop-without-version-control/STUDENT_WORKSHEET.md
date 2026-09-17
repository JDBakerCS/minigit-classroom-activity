# Activity 1 Student Worksheet

You receive two independently changed files:

- `student_file_a.cpp` validates score ranges.
- `student_file_b.cpp` displays the highest score.

Create `combined.cpp` with both features. Do not use Git or an automatic comparison/merge tool.

## Compare and combine

| File | Feature present | Important changed lines |
|---|---|---|
| `student_file_a.cpp` |has 2 input validation (format and range) and caculates the average   | nothing to change. only adding 3 lines from b file |
| `student_file_b.cpp` |Takes 3 numbers and calculates the height  | removes 3 lines: '#include <algorithm>',  'const double highest = std::max({first, second, third});' and '<< "Highest: " << highest << '\n';'  |

| Input | Actual output | Pass/fail |
|---|---|---|
| `70 80 90` |Average: 80.0 Highest: 90.0  | pass  |
| `-1 80 90` | invalid score | invalid score |
| `70 101 90` | invalid score | invalid score |

## From experience to requirements

**Observation — what actually happened while you worked:**

___I combined both files to make combined.cpp. together they offer input validation for the 3 number values, highest score and average score. When I copied each of those lines from b to a I had to check for errors and saw I forgot to also #include<algorithm> ___________________________________________________________________

**Problem — why that event could cause harm:**

__the event could accidently delete some code or overwriting good code. In my case, it cause an runtime error._____________________________________________________________________

**UN:** A developer needs a way to ___compile the code before turning it in. ___________________________________

because ________otherwise the dev wouldnt know the code is incomplete.________________________________________________________.

**UR:** A developer shall be able to _run their and debug their code everytime and not assume it is all there.__________________________________.

## Example

If a student copies all of File B over File A, Task A disappears.

- Observation: “The validation code disappeared after one file replaced the other.”
- Problem: “Valid work can be lost when complete files replace one another.”
- UN: “A developer needs a way to combine independent changes because replacing complete files can destroy valid work.”
- UR: “A developer shall be able to identify the content changed in each file before combining the changes.”

