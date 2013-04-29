#if !defined(SDL_viewmanager_INCLUDE_H_)
#define SDL_viewmanager_INCLUDE_H_

struct SDL_view;

struct SDL_viewmanager
{
	/**
	 * Currently displayed view.
	 */
	SDL_view * current_view;
	/**
	 * Previously displayed view.
	 */
	SDL_view * previous_view;
};

struct SDL_view
{
	/**
	 * Additional data stored in the view.
	 */
	void * data;
};

/**
 * Create a new View Manager structure.
 */
struct SDL_viewmanager * SDL_ViewManager_New();

/**
 * Destroy the View Manager
 */
void SDL_ViewManager_Free(struct SDL_viewmanager *);

/**
 * Create new View with arbitrary data passed in.
 */
struct SDL_view * SDL_View_New(void * data);

/**
 * Push new view onto the views stack
 */
void SDL_ViewManager_Push(struct SDL_viewmanager * manager,
	struct SDL_view * view);

#endif /* SDL_viewmanager_INCLUDE_H_ */
