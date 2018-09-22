#include "context.h"
#include "state.h"

Context::Context(State *state) : state_(state) {}

void Context::request() {
  if (state_)
    state_->handle(*this);
}

void Context::changeState(State *state) { state_.reset(state); }
