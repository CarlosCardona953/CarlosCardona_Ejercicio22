import os
import numpy as np
import matplotlib.pyplot as plt


os.system("g++ Metropolis.cpp -o metropolis.x")
os.system("./metropolis.x > datos.dat")

data= np.loadtxt("datos.dat")

plt.figure()
plt.hist(data, label='$\sigma_{\delta}=1$', bins=60)
plt.title("Metrópolis Hastings")
plt.legend()
plt.savefig("Metropolis.png")