/*
  NOTE: THIS FILE IS AUTOMATICALLY GENERATED. Do not edit
  it by hand.
 */

#ifndef __OSC_DeflateBytecodes
#define __OSC_DeflateBytecodes 1

/* ***********************************************************************
   Open SigComp -- Implementation of RFC 3320 Signaling Compression

   Copyright 2006 Estacado Systems, LLC

   Your use of this code is governed by the license under which it
   has been provided to you. Unless you have a written and signed
   document from Estacado Systems, LLC stating otherwise, your license
   is as provided by the GNU General Public License version 2, a copy
   of which is available in this project in the file named "LICENSE."
   Alternately, a copy of the licence is available by writing to
   the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
   Boston, MA 02110-1307 USA

   Unless your use of this code is goverened by a written and signed
   contract containing provisions to the contrary, this program is
   distributed WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   license for additional details.

   To discuss alternate licensing terms, contact info@estacado.net
 *********************************************************************** */


#include "Types.h"

namespace osc
{
  class DeflateBytecodes
  {
    public:
      static osc::byte_t *getBytecodes();
      static osc::u16 getSize();
      static osc::u16 getLocation();

      enum
      {
        UV_MEMORY_SIZE = 0,
        UV_CYCLES_PER_BIT = 2,
        UV_SIGCOMP_VERSION = 4,
        UV_PARIAL_STATE_ID_LEN = 6,
        UV_STATE_LENGTH = 8,
        INDEX = 32,
        INDEX_LSB = 33,
        EXTRA_LENGTH_BITS = 34,
        LENGTH_VALUE = 36,
        EXTRA_DISTANCE_BITS = 38,
        DISTANCE_VALUE = 40,
        TEMP = 42,
        STATE_LENGTH = 44,
        DISTANCE_TABLE_START = 47,
        BYTE_COPY_LEFT = 64,
        STATE_ADDRESS = 64,
        BYTE_COPY_RIGHT = 66,
        INPUT_BIT_ORDER = 68,
        DECOMPRESSED_POINTER = 70,
        LENGTH_TABLE = 72,
        DISTANCE_TABLE = 188,
        REQUESTED_FEEDBACK_LOCATION = 308,
        RETURNED_PARAMETERS_LOCATION = 310,
        CPB_DMS_SMS = 310,
        SIGCOMP_VERSION = 311,
        SIP_STATE_ID_LENGTH = 312,
        SIP_STATE_ID = 313,
        INITIALIZE_MEMORY = 320,
        DECOMPRESS_SIGCOMP_MESSAGE = 486,
        LOAD_SIP_DICT_ID = 500,
        SET_BUFFER_SIZE = 515,
        NEXT_CHARACTER = 545,
        LITERAL = 585,
        LENGTH_DISTANCE = 595,
        END_OF_MESSAGE = 646,
        CIRCULAR_BUFFER = 657,
        LENGTH_TABLE_START = 16401,
        LENGTH_TABLE_MID = 16425
      };

    private:
      DeflateBytecodes();
      DeflateBytecodes(DeflateBytecodes const &);
      DeflateBytecodes& operator=(DeflateBytecodes const &);
    
      static osc::byte_t bytecodes[];
  };
}
#endif