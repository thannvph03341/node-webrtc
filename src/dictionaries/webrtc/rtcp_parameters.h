#pragma once

#include "src/converters.h"

namespace webrtc { struct RtcpParameters; }

namespace node_webrtc {

DECLARE_TO_JS(webrtc::RtcpParameters)

}  // namespace node_webrtc
