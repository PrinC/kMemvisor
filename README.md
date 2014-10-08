kMemvisor and MemV6
=========
kMemvisor is a hypervisor providing software controlled memory mirroring based on hardware virtualization and static binary translation. Specifically, kMemvisor first creates a backup memory space with the same size of a specified memory for applications or virtual machines.   
![workflow](pic/workflow.png)

MemV6 is a kMemvisor-like implementation for xv6. By modifying memory management module in the OS, MemV6 can achieve high-available memory access in xv6. 

![bt](pic/bt.png)  

Introduction of MemV6
=========
Memv6 will create the redundant page table while the native page table is created. This dissertation also analyzes the memory layout in OS, and introduces the modification of it to ensure that there is no overlap between native address and redundant address.

Changed Files
---------
+memlayout.h
+vm.c
+umalloc.c
+sysproc.c
+proc.c 
  
  
Evaluation
=========
![evaluation](pic/evaluation.png)
  
Reference
=========
[kMemvisor: flexible system wide memory mirroring in virtual environments.](http://dl.acm.org/citation.cfm?doid=2462902.2462910)
[Memvisor: Application Level Memory Mirroring via Binary Translation](http://ieeexplore.ieee.org/xpl/articleDetails.jsp?tp=&arnumber=6337823)