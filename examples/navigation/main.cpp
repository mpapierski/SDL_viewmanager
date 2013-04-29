#include <SDL.h>
#include <SDL_viewmanager.h>

struct view1_type
{
};

struct view2_type
{
};

int
main(int argc, char * argv[])
{
	SDL_viewmanager * manager = SDL_ViewManager_New();
	view1_type * view1_data = (view1_type*)malloc(sizeof(view1_type));
	view2_type * view2_data = (view2_type*)malloc(sizeof(view2_type));
	SDL_view * view1 = SDL_View_New(view1_data);
	SDL_view * view2 = SDL_View_New(view2_data);
	SDL_ViewManager_Push(manager, view1);
	SDL_ViewManager_Free(manager);
	return 0;
}