import os
import numpy as np
import matplotlib.pyplot as plt


os.system("g++ Metropolis.cpp -o metropolis.x")
os.system("./metropolis.x > datos.dat")

