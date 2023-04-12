import csv
from dataclasses import dataclass

import matplotlib.pyplot as plt
from mpl_toolkits import mplot3d
import numpy as np


@dataclass
class Benchmark:
    """A singular benchmark evaluation."""
    formula_size: int
    bytes_size: int
    elapsed_time: float

    def __add__(self, other):
        return Benchmark(self.formula_size + other.formula_size, self.bytes_size + other.bytes_size, self.elapsed_time + other.elapsed_time)

    
@dataclass
class DataPoint:
    """A data point to plot."""
    min: Benchmark
    max: Benchmark
    avg: Benchmark

    
def datapoint(datas: [Benchmark]) -> DataPoint:
    """Create a benchmark point from a requirement."""

    min = None
    max = None
    sum = None

    for data in datas:
        if min is None:
            min = data
        elif data.elapsed_time < min.elapsed_time:
            min = data


        if max is None:
            max = data
        elif data.elapsed_time > max.elapsed_time:
            max = data

        if sum is None:
            sum = data
        else:
            sum = sum + data

    avg = Benchmark(sum.formula_size / len(datas), sum.bytes_size / len(datas), sum.elapsed_time / len(datas))
            
    return DataPoint(min, max, avg)
    
    
if __name__ == r"__main__":
    fig = plt.figure()
    ax = plt.axes(projection="3d")

    ax.set_xlabel('Number of Nodes')
    ax.set_ylabel('Memory Size (bytes)')
    ax.set_zlabel('Parse Time (ms)');
    
    with open("../stpl/benchmarks.csv") as infile:
        reader = csv.DictReader(infile)

        benches = {}
        
        for row in reader:
            name = row["filename"]
            bench = Benchmark(int(row["size"]), int(row["memory"]), float(row["elapsed"][:-2]))

            print(bench)

            if name in benches:
                benches[name].append(bench)
            else:
                benches[name] = [bench]

        x = []
        y = []
        z = []

        print(benches.items())
        
        for bench in sorted(benches.items()):
            p = datapoint(bench[1])
            print(f"{bench[0]}: {p}")

            x.append(p.avg.formula_size)
            y.append(p.avg.bytes_size)
            z.append(p.avg.elapsed_time / 1000.0)

        ax.plot3D(x, y, z, 'lightblue')
        ax.scatter3D(x, y, z)
        plt.show()
        
