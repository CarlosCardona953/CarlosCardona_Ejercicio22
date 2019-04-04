import os
import numpy as np
import matplotlib.pyplot as plt


os.system("g++ Metropolis.cpp -o metropolis.x")
os.system("./metropolis.x > datos.dat")

data= np.loadtxt("datos.dat")
x= (data[0]*1000)
plt.figure()
plt.hist(x, density=True, label='$\sigma_{\delta}=1$', bins=40)
plt.savefig("Metropolis.png")
