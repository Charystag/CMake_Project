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

In order to allow the github action to push on our repository, we need to go to :
```plaintext
Settings > Actions 

## Setting up the branch protection rules

In order to enforce the right branch protection rules, we need to follow the fo
