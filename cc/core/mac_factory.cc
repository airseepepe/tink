// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////

#include "cc/mac_factory.h"

#include "cc/mac.h"
#include "google/protobuf/stubs/stringpiece.h"
#include "proto/tink.pb.h"

namespace cloud {
namespace crypto {
namespace tink {


// static
util::Status MacFactory::RegisterStandardKeyTypes() {
  return util::Status(util::error::UNIMPLEMENTED, "Not implemented yet.");
}

// static
util::Status MacFactory::RegisterLegacyKeyTypes() {
  return util::Status(util::error::UNIMPLEMENTED, "Not implemented yet.");
}

}  // namespace tink
}  // namespace crypto
}  // namespace cloud