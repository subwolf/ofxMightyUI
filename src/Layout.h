/*
 *  Layout.h
 *  iPhoneEmptyExample
 *
 *  Created by hansi on 26.03.11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */


#pragma once

namespace mui{
	class Layout{
		public: 
		Layout(){}; 
		virtual void layout( Container * container ) = 0; 
		virtual ~Layout() = 0; 
		
		Container * container; 
	};
	
	
	
	class RowLayout : public Layout{
	public: 
		RowLayout( int spacing = 3 ) : Layout(), spacing(spacing){}; 
		virtual void layout( Container * container ); 
		
		int spacing; 
	}; 
}