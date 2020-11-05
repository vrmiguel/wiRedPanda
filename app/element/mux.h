#ifndef MUX_H
#define MUX_H

#include "graphicelement.h"

#include <QObject>

class Mux : public GraphicElement {
public:
  explicit Mux( QGraphicsItem *parent = nullptr );
  virtual ~Mux( ) override = default;

  /* GraphicElement interface */
public:
  ElementType elementType( ) override {
    return( ElementType::MUX );
  }
  virtual ElementGroup elementGroup( ) override {
    return( ElementGroup::MUX );
  }
  void updatePorts( ) override;
};

#endif /* MUX_H */