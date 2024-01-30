#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;

  const auto& vec = ranges::iota_view(1, n + 1);
  auto p = vec.begin();
  auto q = vec.begin();

  auto ans = 0LL;
  auto s = 1LL;
  while (q != vec.end()) {
    if (s < n) {
      ++q;
      s += *q;
    } else if (s == n) {
      ++ans;
      ++q;
      s += *q;
    } else {
      s -= *p;
      ++p;
    }
  }

  cout << ans;

  return 0;
}