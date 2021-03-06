#ifndef RTPSRELAY_HANDLER_STATISTICS_LISTENER_H_
#define RTPSRELAY_HANDLER_STATISTICS_LISTENER_H_

#include "ListenerBase.h"

namespace RtpsRelay {

class HandlerStatisticsListener : public ListenerBase {
public:

private:
  void on_data_available(DDS::DataReader_ptr reader) override;
};
}

#endif // RTPSRELAY_HANDLER_STATISTICS_LISTENER_H_
