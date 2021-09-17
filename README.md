# Data Structures & Applications

- Jupyter Notebooks for teaching and learning Data structures using C++
- Some chapters of notebooks are based on open-source textbook: [CS2 Software Design & Data Structures](https://opendsa-server.cs.vt.edu/ODSA/Books/CS2/html/IntroDSA.html) from Virginia Tech's OpenDSA Project


## Requirements

- Linux/MacOS/WSL on Windows (Not tested on Windows itself)
- Jupyter Notebook
- xeus-cling notebook kernel
- git

## Install required tools

- Note: these libraries and tools need to be installed just once, if you've Jupyter Notebook with C++, you can safely ignore this section.

- Install Miniconda: [https://conda.io/miniconda.html](https://conda.io/miniconda.html)
- open a terminal/shell and run the following commands
- create a virual environment to keep C++ specific installtions seperate from base installation

```bash
    conda create -n cpp python=3.7 # create virtual env named cpp with Python3.7 support
    conda activate cpp #activate the virual environemnt
    conda install notebook
    conda install -c conda-forge xeus-cling
    conda install -c conda-forge jupyter_contrib_nbextensions
    conda install -c conda-forge jupyter_nbextensions_configurator
    jupyter nbextensions_configurator enable --user
```

## Run notebooks

- clone the repository locally once the tools are installed
- open a terminal and cd into this cloned repo and run jupyter notebook


```bash
    cd <cs2notebooks repo folder>
    jupyter notebook
```

- open 00-TableOfContents notebook or open individual chapters

## Stop Jupyter Notebook server

- Enter ctrl+c to stop jupyter notebook from the terminal where its running from

```bash
$ conda deactivate # to deactivate the virtual env and go back to base installation
```
