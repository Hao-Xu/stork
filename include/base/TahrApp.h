#ifndef TAHRAPP_H
#define TAHRAPP_H

#include "MooseApp.h"

class TahrApp;

template<>
InputParameters validParams<TahrApp>();

class TahrApp : public MooseApp
{
public:
  TahrApp(InputParameters parameters);
  virtual ~TahrApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* TAHRAPP_H */
