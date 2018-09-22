#include "state.h"
#include "context.h"

void State::changeState(Context &context, State *state) {
  context.changeState(state);
}
