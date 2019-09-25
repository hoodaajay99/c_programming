---
id: Introduction-to-Git-The-Version-Control-System
title: Introduction to Git - The Version Control System
sidebar_label: Introduction to Git
---

### What is Version control System (VCS)
Version control System is a kind of "database" that allows you to keep track of changes made to your code and documents over time.

It saves a snapshot (version) of your complete project at any time you want. And allows you later to take a look at an older snapshot.

#### Version control is useful because:
- Keeps track of changes to your project
- Saves snapshots (versions) of your project
- Allows you to view older snapshots
- You can revert back to specific ‘versions’ of your code
- Enables collaboration on the same project
- Helps keeps Backup of Projects

#### Types of Version Control Systems
- Centralized Version Control System (CVCS)
  - Example: SVN
- Distributed Version Control System (DVCS)
  - Example: GIT

### Git - Distributed Version Control System

Git is a distributed version-control system for tracking changes in source code and text documents during software development.

Each developer has its open copy of the repository besides central repository for storing the source code and text documents.

Each developer can work on his own repository and later on share 

![Distributed Version Control](https://link](http://verificationexcellence.in/wp-content/uploads/2018/07/reposetory.jpg)

### Installing Git on Windows

#### Install using - stand-alone installer
- Download the latest [Git for Windows installer](https://gitforwindows.org)
- Run the installer to completion. Enable `Git Bash` during installation. 

#### Verify git version
- Open `Command Prompt`, `Git Bash` or `WSL Terminal`
- Run command below

```bash
$ git --version
git version 2.9.2
```

#### Installing Git on Linux

#### Debian / Ubuntu: Install using - apt-get
- Open Terminal and run below commands

```bash
$ sudo apt-get update
$ sudo apt-get install git
```

#### Fedora: Install using - dnf/yum
- Open Terminal and run below commands

```bash
$ sudo dnf install git
or
$ sudo yum install git
```

#### Verify git version
```bash
$ git --version
git version 2.9.2
```

#### Installing Git on MacOS

#### Install using - Git for Mac Installer
- Download the latest [Git for Mac installer](https://sourceforge.net/projects/git-osx-installer/files/)
- Follow the prompts to install Git

#### Install using - Homebrew
- Open terminal and install Git using Homebrew
```bash
$ brew install git
```

#### Verify git version
```bash
$ git --version
git version 2.9.2
```

> If you've installed XCode (or it's Command Line Tools), Git may already be installed.


