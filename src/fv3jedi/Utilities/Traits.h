/*
 * (C) Copyright 2017 UCAR
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#ifndef FV3JEDI_UTILITIES_TRAITS_H_
#define FV3JEDI_UTILITIES_TRAITS_H_

#include <string>

#include "fv3jedi/ErrorCovariance/ErrorCovariance.h"
#include "fv3jedi/Geometry/Geometry.h"
#include "fv3jedi/GeometryIterator/GeometryIterator.h"
#include "fv3jedi/GetValues/GetValues.h"
#include "fv3jedi/GetValues/LinearGetValues.h"
#include "fv3jedi/Increment/Increment.h"
#include "fv3jedi/State/State.h"

#include "fv3jedi/ModelBias/ModelBias.h"
#include "fv3jedi/ModelBias/ModelBiasIncrement.h"

#include "fv3jedi/ModelBias/ModelBiasCovariance.h"

#include "ioda/ObsDataVector.h"
#include "ioda/ObsSpace.h"
#include "ioda/ObsVector.h"

#include "ufo/GeoVaLs.h"
#include "ufo/LinearObsOperator.h"
#include "ufo/Locations.h"
#include "ufo/ObsBias.h"
#include "ufo/ObsBiasCovariance.h"
#include "ufo/ObsDiagnostics.h"
#include "ufo/ObsOperator.h"

namespace fv3jedi {

struct Traits {
  static std::string name() {return "FV3JEDI";}
  static std::string nameCovar() {return "FV3JEDIstatic";}
  static std::string nameCovar4D() {return "FV3JEDIstatic";}

  typedef fv3jedi::ErrorCovariance      Covariance;
  typedef fv3jedi::Increment            Increment;
  typedef fv3jedi::Geometry             Geometry;
  typedef fv3jedi::GeometryIterator     GeometryIterator;
  typedef fv3jedi::GetValues            GetValues;
  typedef fv3jedi::LinearGetValues      LinearGetValues;
  typedef fv3jedi::ModelBias            ModelAuxControl;
  typedef fv3jedi::ModelBiasIncrement   ModelAuxIncrement;
  typedef fv3jedi::ModelBiasCovariance  ModelAuxCovariance;
  typedef fv3jedi::State                State;

  typedef ufo::GeoVaLs                  GeoVaLs;
  typedef ufo::LinearObsOperator        LinearObsOperator;
  typedef ufo::Locations                Locations;
  typedef ufo::ObsBias                  ObsAuxControl;
  typedef ufo::ObsBiasCovariance        ObsAuxCovariance;
  typedef ufo::ObsBiasIncrement         ObsAuxIncrement;
  typedef ufo::ObsDiagnostics           ObsDiagnostics;
  typedef ufo::ObsOperator              ObsOperator;

  typedef ioda::ObsSpace                ObsSpace;
  typedef ioda::ObsVector               ObsVector;
  template <typename DATA> using ObsDataVector = ioda::ObsDataVector<DATA>;
};

}  // namespace fv3jedi

#endif  // FV3JEDI_UTILITIES_TRAITS_H_
