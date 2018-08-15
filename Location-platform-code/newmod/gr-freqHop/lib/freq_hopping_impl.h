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

#ifndef INCLUDED_FREQHOP_FREQ_HOPPING_IMPL_H
#define INCLUDED_FREQHOP_FREQ_HOPPING_IMPL_H

#include <freqHop/freq_hopping.h>

namespace gr {
  namespace freqHop {

    class freq_hopping_impl : public freq_hopping
    {
     private:
     boost::shared_ptr<gr::thread::thread> d_thread;	
      bool d_finished;
      pmt::pmt_t d_msg;
      float d_period_ms;
      const pmt::pmt_t d_port;
      float d_start_freq;
      float d_end_freq;
      int d_nchannels;
      float d_freq_delta;

      void run();

    public:
      freq_hopping_impl(float start_freq, int nchannels, float freq_delta,float period_ms,float end_freq);
      ~freq_hopping_impl();

      void set_msg(pmt::pmt_t msg) { d_msg = msg; }
      pmt::pmt_t msg() const { return d_msg; }
      void set_period(float period_ms) { d_period_ms = period_ms; }
      float period() const { return d_period_ms; }

      void set_start_freq(float start_freq) { d_start_freq = start_freq;}
      float start_freq() const {return d_start_freq;}
      void set_end_freq(float end_freq) {d_end_freq = end_freq;}
      float end_freq() const {return d_end_freq;}
      void set_nchannels(int nchannels){d_nchannels = nchannels;}
      int nchannels() const {return d_nchannels;}
      void set_freq_delta(float freq_delta){d_freq_delta = freq_delta;}
	float  freq_delta() const {return d_freq_delta;};

      bool start();
      bool stop();
    };

  } // namespace freqHop
} // namespace gr

#endif /* INCLUDED_FREQHOP_FREQ_HOPPING_IMPL_H */

