#pragma once

#include "abstractExpression.h"

class NonterminalExpression : public AbstractExpression {
  explicit NonterminalExpression(AbstractExpression *exp1,
                                 AbstractExpression *exp2)
      : expression1_(exp1), expression2_(exp2) {}

  virtual ~NonterminalExpression() {
    delete expression1_;
    delete expression2_;
  }

  virtual bool interpret(const Context &context) const override {
    return expression1_->interpret(context) && expression2_->interpret(context);
  }

private:
  AbstractExpression *expression1_;
  AbstractExpression *expression2_;
};
