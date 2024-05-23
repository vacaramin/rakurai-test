# Question #2 | Advantages of Version control | given Scenario | 

## Advantages of Version Control

Version control is used to track the progress/changes made during the software development lifecycle. With the use of version control code changes can be tracked, monitored and integrated such that multiple developers can seamlessly code together on a project and easily integrate their changes.

## Scenario

- Case: Update old feature branch with the latest master.

  - Using Merge
    We can update the feature branch with the latest master with merge strategy in two ways
        - 1. `git pull origin master`
            or  
        - 2. `git fetch origin master && git merge origin master`
  - Using Rebase
    For rebase first we have to `checkout` the main/master branch using `git checkout master` and then we can rebase it to main using `git rebase origin feature-branch` this will bring all the change commits from the master branch and attach it to the Head of feature branch and move the Head to the latest commit.
