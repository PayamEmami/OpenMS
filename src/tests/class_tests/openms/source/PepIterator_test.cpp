// --------------------------------------------------------------------------
//                   OpenMS -- Open-Source Mass Spectrometry               
// --------------------------------------------------------------------------
// Copyright The OpenMS Team -- Eberhard Karls University Tuebingen,
// ETH Zurich, and Freie Universitaet Berlin 2002-2016.
// 
// This software is released under a three-clause BSD license:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of any author or any participating institution 
//    may be used to endorse or promote products derived from this software 
//    without specific prior written permission.
// For a full list of authors, refer to the file AUTHORS. 
// --------------------------------------------------------------------------
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL ANY OF THE AUTHORS OR THE CONTRIBUTING 
// INSTITUTIONS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// --------------------------------------------------------------------------
// $Maintainer: Clemens Groepl, Andreas Bertsch $
// $Authors: Chris Bauer $
// --------------------------------------------------------------------------

#include <OpenMS/CONCEPT/ClassTest.h>
#include <OpenMS/test_config.h>
#include <OpenMS/CONCEPT/Factory.h>
#include <OpenMS/CHEMISTRY/PepIterator.h>
#include <OpenMS/FORMAT/FastaIterator.h>
#include <OpenMS/CHEMISTRY/EdwardsLippertIterator.h>
#include <OpenMS/FORMAT/FastaIteratorIntern.h>
#include <OpenMS/CHEMISTRY/EdwardsLippertIteratorTryptic.h>
#include <OpenMS/CHEMISTRY/TrypticIterator.h>

using namespace OpenMS;
using namespace std;

START_TEST(PepIterator, "$Id$")

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

START_SECTION(PepIterator())
{
	NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual ~PepIterator()))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((PepIterator(const PepIterator &source)))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual FASTAEntry operator *()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual PepIterator& operator++()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual PepIterator* operator++(int)=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual void setFastaFile(const String &f)=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual String getFastaFile()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual void setSpectrum(const std::vector< double > &s)=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual const std::vector<double>& getSpectrum()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual void setTolerance(double t)=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual double getTolerance()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual bool begin()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((virtual bool isAtEnd()=0))
{
  NOT_TESTABLE
}
END_SECTION

START_SECTION((void registerChildren()))
{
	PepIterator* p1 = Factory<PepIterator>::create("EdwardsLippertIterator");
  EdwardsLippertIterator* el_nullPointer = 0;
  TEST_NOT_EQUAL(dynamic_cast<EdwardsLippertIterator*>(p1),el_nullPointer)

  p1 = Factory<PepIterator>::create("EdwardsLippertIteratorTryptic");
  EdwardsLippertIteratorTryptic* elt_nullPointer = 0;
  TEST_NOT_EQUAL(dynamic_cast<EdwardsLippertIteratorTryptic*>(p1),elt_nullPointer)

  p1 = Factory<PepIterator>::create("TrypticIterator");
  TrypticIterator* tryp_nullPointer = 0;
  TEST_NOT_EQUAL(dynamic_cast<TrypticIterator*>(p1),tryp_nullPointer)

  p1 = Factory<PepIterator>::create("FastaIterator");
  FastaIterator* fasta_nullPointer = 0;
  TEST_NOT_EQUAL(dynamic_cast<FastaIterator*>(p1),fasta_nullPointer)

  p1 = Factory<PepIterator>::create("FastaIteratorIntern");
  FastaIteratorIntern* fastaIn_nullPointer = 0;
  TEST_NOT_EQUAL(dynamic_cast<FastaIteratorIntern*>(p1),fastaIn_nullPointer)
}
END_SECTION


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
END_TEST



