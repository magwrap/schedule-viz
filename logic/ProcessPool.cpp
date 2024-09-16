#include "ProcessPool.h"
#include <algorithm>
#include <random>

void ProcessPool::addProcess(const Process &process) {
  processes.push_back(process);
}

Process &ProcessPool::getProcess(size_t index) { return processes[index]; }

size_t ProcessPool::size() const { return processes.size(); }

void ProcessPool::shuffle() {
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(processes.begin(), processes.end(), g);
}

void generateProcesses(ProcessPool &pool, int num) {
  for (int i = 0; i <= num; ++i) {
    Process newProcess;
    // Randomly set the status (for demonstration purposes)
    /*int randomStatus = rand() % 5;*/
    newProcess.setStatus(static_cast<Process::Status>(Process::Status::NEW));
    pool.addProcess(newProcess);
  }
}

void ProcessPool::displayProcesses(std::ostream &out) const {
  out << "Process Pool Contents:" << std::endl;
  for (size_t i = 0; i < processes.size(); ++i) {
    out << "Process " << i << " - Status: ";
    switch (processes[i].getStatus()) {
    case Process::Status::NEW:
      out << "NEW";
      break;
    case Process::Status::READY:
      out << "READY";
      break;
    case Process::Status::RUNNING:
      out << "RUNNING";
      break;
    case Process::Status::WAITING:
      out << "WAITING";
      break;
    case Process::Status::TERMINATED:
      out << "TERMINATED";
      break;
    }
    out << std::endl;
  }
}
