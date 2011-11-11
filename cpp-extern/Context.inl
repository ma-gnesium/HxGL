//Kept separate from GL.cpp in case we want to have a context.ndll

value __HXGL_createWindow( value title, value width, value height, value show )
{
	return alloc_int( 
		pf->wnd->create( 
			val_string( title ),
			val_int( width ),
			val_int( height ),
			val_bool( show ) ) );
}
DEFINE_PRIM( __HXGL_createWindow, 4 );

value __HXGL_closeWindow( )
{
	pf->wnd->destroy( );
	return alloc_null( );	
}
DEFINE_PRIM( __HXGL_closeWindow, 0 );

value __HXGL_resizeWindow( value width, value height )
{
	pf->wnd->resize( 
		val_int( width ),
		val_int( height ) );
	return alloc_null( );	
}
DEFINE_PRIM( __HXGL_resizeWindow, 2 );

value __HXGL_positionWindow( value x, value y )
{
	pf->wnd->position( 
		val_int( x ),
		val_int( y ) );
	return alloc_null( );	
}
DEFINE_PRIM( __HXGL_positionWindow, 2 );