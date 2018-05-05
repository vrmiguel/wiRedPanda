#ifndef LOGICOUTPUT_H
#define LOGICOUTPUT_H

#include "logicelement.h"

class LogicOutput : public LogicElement {
public:
  explicit LogicOutput(int inputSz );

  /* LogicElement interface */
protected:
  virtual void _updateLogic( const std::vector< bool > &inputs );
};


#endif // LOGICOUTPUT_H
