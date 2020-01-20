# CS2: Data Structures & Applications in C++ using Jupyter Notebook

## Requirements

- Linux/MacOS (Not tested on Windows)
- Jupyter Notebook
- xeus-cling notebook kernel
- git

## Install required tools

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

- open a terminal and cd into this cloned repo and run jupyter notebook

```bash
    cd <cs2notebooks repo folder>
    jupyter notebook
```
