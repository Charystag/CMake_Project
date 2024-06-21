# Under the hood: How to get the most from this project?

## The files: What is actually written inside?

In the project you'll find:
	- My implementation of 4 functions (fibonacci, factorial, prime and palindrome)
	- My configuration file for Doxygen
	- A bunch of CMakeLists.txt file that are used to configure the project
	- A [github workflow file](/.github/workflows/ci.yml)

In order to know how to realise the project, you can look into them and see what you 
need to do achieve the same results.

## Setting up the right repository permissions

In order to allow the github action to push on our repository, we need to go to (inside our repository):
```plaintext
Settings > Actions > general
```
and grant Read and write permissions to our bot.

## Setting up the branch protection rules

In order to enforce the right branch protection rules, we need to go to (inside our repository):
```plaintext
Settings > Rules > Rulesets
```
and create a new Ruleset.
Inside this ruleset, we will match the `master` or `main` branch and will enable the option 
```plaintext
Require status checks to pass
```
We will add the check `CI` (which corresponds to the name of our **workflow**) and change the source 
from `any sources` to `GitHub Actions`.

Then we will ensure that the *Enforcement status* is set on *Active* and save our changes.

## Answer to the questions

1. How does the GitHub Actions workflow ensures Continuous Integration?

<details>
<summary>Solution</summary>

GitHub Actions ensures continous integration (CI) by automating the build, test and deployment process whenever 
changes are pushed to the repository. It triggers workflows based on events like code pushes or pull requests, runs defined jobs in paraller or sequentially, 
provides detailed logs and notifications to streamline integration process
</details>

2. How does CMake make the process of building complex projects easier?

<details>
<summary>Solution</summary>

CMake simplifies the building of complex projects by providing cross-platform support, allowing the same scripts to be used across various OS and compilers. 
It manages dependencies automatically, ensuring efficient rebuilds, and keeps build files separate from source files with out-of-source builds. CMake 
also makes it easy to link against third-party libraries, supports different build configurations, and integrates with popular IDEs.
</details>
