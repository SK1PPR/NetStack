#pragma once
#include "transport.h"

Transport::Transport() {}

ssize_t Transport::send(const void *buf, size_t len, const sockaddr *addr, socklen_t addrlen)
{
    return -1;
}

ssize_t Transport::recv(void *buf, size_t len, sockaddr *addr, socklen_t *addr_len)
{
    return -1;
}

int Transport::bind_m(const sockaddr *addr, socklen_t addrlen)
{
    return -1;
}

int Transport::connect_m(const sockaddr *addr, socklen_t addrlen)
{
    return 0;
}

int Transport::accept_m(sockaddr *addr, socklen_t *addrlen)
{
    return 0;
}

int Transport::listen_m(int backlog)
{
    return 0;
}

Transport::~Transport() {}