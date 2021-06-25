#include <iostream>
#include<string>
#include<vector>

using namespace std;
typedef long long int ll;

ll generate()
{
  static std::vector<ll> history;

  ll current;
  if (history.size() < 55)
  {
    auto k = history.size() + 1;
    current = (300007ULL * k*k*k - 200003 * k + 100003) % 1000000;
  }
  else
  {
    current = (history[history.size() - 55] + history[history.size() - 24]) % 1000000;

    const size_t RemoveAtOnce = 100;
    if (history.size() > 55 + RemoveAtOnce)
      history.erase(history.begin(), history.begin() + RemoveAtOnce);
  }

  history.push_back(current);
  return current;
}
