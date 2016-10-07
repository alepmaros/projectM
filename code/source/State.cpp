#include <State.h>

#include <StateStack.h>

State::Context::Context(sf::RenderWindow& window, TextureHolder& textures, FontHolder& fonts, Player& player)
	: window(&window)
	, textures(&textures)
	, fonts(&fonts)
	, player(&player)
{

}

State::State(StateStack& stack, Context context)
	: mContext(context)
	, mStack(&stack)
{

}

State::~State()
{

}

void State::requestStackPush(States::ID stateID)
{
	mStack->pushState(stateID);
}

void State::requestStackPop()
{
	mStack->popState();
}

void State::requestStateClear()
{
	mStack->clearState();
}

State::Context State::getContext() const
{
	return mContext;
}