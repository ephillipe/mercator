// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2003 Damien McGinnes

#ifndef MERCATOR_POINT_H
#define MERCATOR_POINT_H

#include <iostream>

namespace Mercator { 

class BasePoint {
  private:
    float m_height;
    float m_roughness;
    float m_falloff;

  public:
    const static float HEIGHT = 8.0;
    const static float ROUGHNESS = 1.15;
    const static float FALLOFF = 0.15;

    explicit BasePoint(float h = HEIGHT, float r = ROUGHNESS, float f = FALLOFF) :
                 m_height(h), m_roughness(r), m_falloff(f) {}

    const float height() const { return m_height; }
    float & height() { return m_height; }

    const float roughness() const { return m_roughness; }
    float & roughness() { return m_roughness; }

    const float falloff() const { return m_falloff; }
    float & falloff() { return m_falloff; }

    int seed() const { return (int)(m_height * 10.0);}
};

} //namespace Mercator

#endif // MERCATOR_POINT_H