# -*- coding: utf-8 -*-
"""
Created on Tue May  4 19:05:30 2021

@author: esmac
"""

def bubblesort(liste):
    for i in range(len(liste)-1):
        for j in range(0,len(liste)-1-i):
            if liste[j]>liste[j+1]:
                liste[j],liste[j+1] = liste[j+1],liste[j]
            else:
                continue
    return liste   
       
print("Write the numbers.")                
liste = list(map(int,input().split()))               
result = bubblesort(liste) 
print(result)
input("Press enter to exit ;)")