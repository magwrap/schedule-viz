#include "Process.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Process obj; // Create a new instance of Process

  // Check initial status
  if (obj.getStatus() == Process::Status::NEW) {
    std::cout << "Initial status: NEW\n";
  }

  // Change status
  obj.setStatus(Process::Status::READY);

  // Check new status
  switch (obj.getStatus()) {
  case Process::Status::RUNNING:
    std::cout << "New status: RUNNING\n";
    break;
  case Process::Status::WAITING:
    std::cout << "New status: WAITING\n";
    break;
  case Process::Status::TERMINATED:
    std::cout << "New status: TERMINATED\n";
    break;
  }

  return 0;
}
