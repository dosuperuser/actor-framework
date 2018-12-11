/******************************************************************************
 *                       ____    _    _____                                   *
 *                      / ___|  / \  |  ___|    C++                           *
 *                     | |     / _ \ | |_       Actor                         *
 *                     | |___ / ___ \|  _|      Framework                     *
 *                      \____/_/   \_|_|                                      *
 *                                                                            *
 * Copyright 2011-2018 Dominik Charousset                                     *
 *                                                                            *
 * Distributed under the terms and conditions of the BSD 3-Clause License or  *
 * (at your option) under the terms and conditions of the Boost Software      *
 * License 1.0. See accompanying files LICENSE and LICENSE_ALTERNATIVE.       *
 *                                                                            *
 * If you did not receive a copy of the license files, see                    *
 * http://opensource.org/licenses/BSD-3-Clause and                            *
 * http://www.boost.org/LICENSE_1_0.txt.                                      *
 ******************************************************************************/

#pragma once

#include "caf/io/network/newb_base.hpp"
#include "caf/policy/transport.hpp"

namespace caf {
namespace io {
namespace network {

struct acceptor_base : public newb_base {
  acceptor_base(actor_config& cfg, default_multiplexer& dm,
                native_socket sockfd);
  virtual expected<actor>
  create_newb(network::native_socket sockfd, policy::transport_ptr pol,
              bool add_children_to_loop) = 0;
};

} // namespace network
} // namespace io
} // namespace caf
