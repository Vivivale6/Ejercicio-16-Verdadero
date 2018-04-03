import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt("sobres.txt")

y1=datos[:,0]
y2=datos[:,1]
x=np.linspace(0,159,160)

plt.plot(x,y1)
plt.plot(x,y2)
plt.savefig("grafica.pdf")
