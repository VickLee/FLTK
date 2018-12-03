CXX = g++  #NBML2s
OBJECT= vic
OBJECT_crrc=vic2s
CFLAGS = -Wall			 	\
	-DG_DISABLE_DEPRECATED 	 	\
	-DGDK_DISABLE_DEPRECATED 	\
	-DGDK_PIXBUF_DISABLE_DEPRECATED \
	-DGTK_DISABLE_DEPRECATED \
  	-Wno-deprecated  	
	#-g \

libDirs	=	-L./lib\
			-L./event_db\
		        -L$(XORGPATH)/lib
		
incDirs	=	-I./include\
		#-I../mvb_buf\
		 
LIBS	=	-lX11 -lXext -lfltk -lfltk_images -lfltk_jpeg -lz -lm -lpthread -lPixyMvb -lrt -lsqlite3 #-ldata_buf_ppc\

libDirs_pc	=	-L./lib_pc\
#		-L../mvb_buf\
		
incDirs_pc	=	-I./include_pc\
		#-I../mvb_buf\
		 
LIBS_pc	=	-lX11 -lXext -lfltk -lfltk_images -lfltk_jpeg -lz -lm  -lrt -lpthread  -ldl#-ltpx20 -ljpeg -lfltk_JPEG 
				

SRCs	=	Main.cxx\
			Views/Frame/MainFrame.cxx\
			CallBacks/BtnCallBack.cxx

			
$(OBJECT):$(SRCs)
	$(CXX) $(SRCs) -o $(OBJECT) $(CFLAGS)   $(libDirs_pc) $(incDirs_pc) $(LIBS_pc)	      
       
PHONY:crrc
crrc:
	$(CXX) $(SRCs) -o $(OBJECT_crrc) $(CFLAGS)   $(libDirs) $(incDirs) $(LIBS)	
	
clean: 
	rm -f *.o $(OBJECT) $(OBJECT_crrc)
