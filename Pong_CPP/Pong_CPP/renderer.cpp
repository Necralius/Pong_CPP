void render_background() {
	unsigned int* pixel = (unsigned int*)render_state.memory;
	for (int y = 0; y < render_state.height; y++)
	{
		for (int x = 0; x < render_state.width; x++)
		{
			*pixel++ = 0xff00ff * x + 0x00ff00 * y;
		}
	}
}
void clear_screen(unsigned int color) {
	unsigned int* pixel(unsigned int*)render_state.memory;
	for (int y = 0; y < render_state; y++)
	{

	}



}