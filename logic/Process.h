// Process.h
#ifndef PROCESS_H
#define MYCLASS_H

class Process {
public:
  enum class Status { NEW, READY, RUNNING, WAITING, TERMINATED };

  Process(); // Constructor
  Status getStatus() const;
  void setStatus(Status newStatus);

private:
  Status currentStatus;
};

#endif // MYCLASS_H
