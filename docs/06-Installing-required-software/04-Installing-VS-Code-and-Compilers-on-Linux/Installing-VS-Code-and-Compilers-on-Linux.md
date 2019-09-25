---
id: Installing-VS-Code-and-Compilers-on-Linux
title: Installing VS Code and Compilers on Linux
sidebar_label: Installing VS Code and Compilers on Linux
---

> Visual Studio Code is a source-code editor developed by Microsoft for Windows, Linux and macOS. It includes support for debugging, embedded Git control and GitHub, syntax highlighting, intelligent code completion, snippets, and code refactoring.

## Why VS Code for C Programming
So far IDEs like CodeBlocks, Xcode, Visual Studio have been used for C/C++ programming and are the IDEs of choice. You are free to use them for this course.

But I have decided to use VS code for following reasons - 
- Support for C/C++ has been added in 2019
- Built in Git - Version control system
- Intellisense: syntax highlighting and autocomplete
- Vibrant community

## Follow these steps to Install VS Code on Linux

### Step 1: Download
- Got to site: https://code.visualstudio.com/download
- Download .deb package if you are using Ubintu/Debian
- Download .rpm package if you are using RedHat/Fedora/SUSE

> `deb` and `rpm` are package files which allow for wasy bundling of files, unpack on the target filesystem, execute pre- and post-install scripts, check dependencies. These are created by __Package Managers__ which allow us to distribute software effectively and securely.

### Step 2: Install

###### For Debian and Ubuntu based distributions: 

Use the commands Below:

```bash
$ sudo apt install ./<file>.deb
or 
# If you're on an older Linux distribution, you will need to run this instead:
$ sudo dpkg -i <file>.
$ sudo apt-get install -f # Install dependencies
```

Alternatively, VS Code can also be installed by adding the repository and key:

```
curl https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -o root -g root -m 644 packages.microsoft.gpg /usr/share/keyrings/
sudo sh -c 'echo "deb [arch=amd64 signed-by=/usr/share/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/vscode stable main" > /etc/apt/sources.list.d/vscode.list'
```

Then update the package cache and install the package using:

```bash
sudo apt-get install apt-transport-https
sudo apt-get update
sudo apt-get install code
```
[Click for Detailed Instructions](https://code.visualstudio.com/docs/setup/linux)

###### For RHEL, Fedora, and CentOS based distributions

Use the commands Below:

```bash
$ sudo rpm -ivh ./<file>.rpm
```

Alternatively, VS Code can also be installed using yum package manager.

Install the key and repository:

```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
```

Update the package cache and install

```bash
sudo dnf check-update
sudo dnf install code

or 

yum check-update
sudo yum install code
```

[Click for Detailed Instructions](https://code.visualstudio.com/docs/setup/linux)


## Install GCC Compiler on Linux (Ubuntu)

The GNU Compiler Collection (GCC) is a collection of compilers and libraries for C, C++, Objective-C etc

> `build-essential`: Contains the GCC compiler, libraries and other utilities required for compiling software. So we install `build-essential` to install gcc compiler.

Following steps required to install GCC compiler on Ubuntu 18.04. The same instructions apply for Ubuntu 16.04 and any Ubuntu-based distribution, including Kubuntu, Linux Mint and Elementary OS.

```bash
$ sudo apt update  #updating the packages list
$ sudo apt install build-essential # Install the build-essential package
$ sudo apt-get install manpages-dev # install the manual pages about using GNU/Linux for development
$ gcc --version # validate that the GCC compiler is successfully installed
gcc (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4
Copyright (C) 2013 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

GCC is now installed on your system and you can start using it.

