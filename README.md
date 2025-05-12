# Fast and scalable quantum computing simulation on multi-core and many-core platforms
Overview:

This project presents a high-performance, scalable, and energy-efficient quantum circuit simulator designed to leverage the massive parallelism of GPU clusters. Our implementation focuses on optimizing for speed and power consumption, enabling the simulation of larger and more complex quantum circuits than typically feasible on conventional hardware or less optimized simulators. The code is built to scale efficiently across multiple GPUs, making it suitable for research and development in quantum algorithm design and benchmarking.

Key Features:

High-Performance Quantum Simulation: Achieves significantly faster simulation speeds compared to CPU-based or less optimized GPU simulators.
Scalability on GPU Clusters: Designed to distribute quantum circuit simulations efficiently across a cluster of GPUs, enabling the exploration of larger qubit systems.
Low-Power Optimization: Incorporates techniques to minimize energy consumption during simulation, contributing to more sustainable high-performance computing.
Support for Diverse Quantum Circuits: Capable of simulating a variety of quantum gates and circuit structures, including those relevant to common quantum algorithms.
Modular and Extensible Architecture: The codebase is structured to allow for easy integration of new features, quantum gates, and optimization strategies.
Benchmarking Tools: Includes tools and scripts used for evaluating performance and power efficiency.
Associated Publication:

Paper Title: Fast Scalable and Low-Power Quantum Circuit Simulation on the Cluster of GPUs Platforms
Authors: Armin Ahmadzadeh and Hamid Sarbazi-Azad
Publication Link: https://link.springer.com/article/10.1007/s11082-024-07492-3
Citation (BibTeX):
Code snippet

@article{Ahmadzadeh2024FastScalable,
  title={{Fast scalable and low-power quantum circuit simulation on the cluster of GPUs platforms}},
  author={Ahmadzadeh, Armin and Sarbazi-Azad, Hamid},
  journal={Optical and Quantum Electronics},
  volume={56},
  issue={10},
  pages={1208},
  year={2024},
  publisher={Springer US},
  doi={10.1007/s11082-024-07492-3}
}
Getting Started:

To compile and run the simulator, please refer to the detailed instructions in the README.md and INSTALL.md files within this repository. These files provide guidance on dependencies, build procedures, and running example simulations.

Technologies Used:

CUDA Toolkit
C++
[Mention any specific GPU libraries, e.g., cuQuantum, Thrust, etc., if used]
[Mention any specific communication libraries, e.g., MPI, if used for multi-node operation]
Contribution and Support:

We welcome contributions and feedback from the community. If you encounter any issues, have suggestions for improvements, or wish 1  to contribute, please open an issue or submit a pull request.   
