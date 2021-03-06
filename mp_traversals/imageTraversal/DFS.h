/**
 * @file DFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <stack>
#include <iostream>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A depth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class DFS : public ImageTraversal {
public:
  DFS(const PNG & png, const Point & start, double tolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;
  Point get_start();
  double get_tolerance();
private:
	/** @todo [Part 1] */
	/** add private members here*/
  std::stack <Point> s;
  double tolerance;
  PNG png;
  Point start;
};
