#ifndef LD_BATCH_ASYNC_H
#define LD_BATCH_ASYNC_H

#include <node.h>
#include <nan.h>

#include "async.h"
#include "batch.h"
#include "database.h"

namespace leveldown {

class BatchWriteWorker : public AsyncWorker {
public:
  BatchWriteWorker (
      Batch* batch
    , Nan::Callback *callback
  );

  virtual ~BatchWriteWorker ();
  virtual void Execute ();

private:
  Batch* batch;
};

} // namespace leveldown

#endif
