/* -*- c++ -*- */
/* 
 * Copyright 2018 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_FREQHOP_FREQ_HOPPING_H
#define INCLUDED_FREQHOP_FREQ_HOPPING_H

#include <freqHop/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace freqHop {

    /*!
     * \brief <+description of block+>
     * \ingroup freqHop
     *
     */
    class FREQHOP_API freq_hopping : virtual public gr::block
    {
     public:
      // gr::blocks::message_strobe::sptr
      typedef boost::shared_ptr<freq_hopping> sptr;

      /*!
       * Make a message stobe block to send message \p msg every \p
       * period_ms milliseconds.
       *
       * \param msg The message to send as a PMT.
       * \param period_ms the time period in milliseconds in which to
       *                  send \p msg.
       */
      static sptr make(float start_freq, int nchannels, float freq_delta, float period_ms,float end_freq);

      /*!
       * Reset the message being sent.
       * \param msg The message to send as a PMT.
       */
      virtual void set_msg(pmt::pmt_t msg) = 0;

      /*!
       * Get the value of the message being sent.
       */
      virtual pmt::pmt_t msg() const = 0;

      /*!
       * Reset the sending interval.
       * \param period_ms the time period in milliseconds.
       */
      virtual void set_period(float period_ms) = 0;

      /*!
       * Get the time interval of the strobe.
       */
      virtual float period() const = 0;

      virtual void set_start_freq(float start_freq)  = 0;
    	virtual float start_freq() const = 0;
	virtual void set_nchannels(int nchannels) = 0;
	virtual int nchannels() const = 0;
	virtual void set_freq_delta(float freq_delta) = 0;
	virtual float freq_delta() const = 0;
virtual void set_end_freq(float end_freq) = 0;
virtual float end_freq() const = 0;
    };


  } // namespace freqHop
} // namespace gr

#endif /* INCLUDED_FREQHOP_FREQ_HOPPING_H */

